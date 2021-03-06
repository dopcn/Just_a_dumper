//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@interface DEFMerchantTableInfoContentView : UIView
{
    NSArray *_tableInfoDetailArray;
    NSString *_notes;
    UIView *_detailViewsContainer;
    UILabel *_promptMessageLabel;
    unsigned long long _numberOfLines;
}

@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UILabel *promptMessageLabel; // @synthesize promptMessageLabel=_promptMessageLabel;
@property(retain, nonatomic) UIView *detailViewsContainer; // @synthesize detailViewsContainer=_detailViewsContainer;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(copy, nonatomic) NSArray *tableInfoDetailArray; // @synthesize tableInfoDetailArray=_tableInfoDetailArray;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)bindData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

