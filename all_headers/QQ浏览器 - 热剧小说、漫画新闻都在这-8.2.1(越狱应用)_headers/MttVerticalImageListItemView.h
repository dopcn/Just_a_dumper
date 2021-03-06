//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;
@protocol MttVerticalImageListItemCellDelegate;

@interface MttVerticalImageListItemView : UIView
{
    UILabel *_labelTitle;
    _Bool _bHasHistoryItems;
    NSString *_sTitle;
    long long _nVerticalType;
    NSArray *_categoryArray;
    id <MttVerticalImageListItemCellDelegate> _delegate;
}

+ (double)cellHeight;
+ (double)ImageButtonWidth;
@property __weak id <MttVerticalImageListItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bHasHistoryItems; // @synthesize bHasHistoryItems=_bHasHistoryItems;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(nonatomic) long long nVerticalType; // @synthesize nVerticalType=_nVerticalType;
@property(copy, nonatomic) NSString *sTitle; // @synthesize sTitle=_sTitle;
- (void).cxx_destruct;
- (void)clickButton:(id)arg1;
- (void)createbuttons;
- (void)hotwordTilte:(id)arg1;
- (void)createHistoryLable;
- (void)createSeparatorLine;
- (void)createContent;
- (void)setFrame:(struct CGRect)arg1;

@end

