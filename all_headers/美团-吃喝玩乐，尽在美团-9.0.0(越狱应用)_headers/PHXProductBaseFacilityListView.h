//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@interface PHXProductBaseFacilityListView : UIView
{
    NSString *_title;
    UILabel *_titleLabel;
    UILabel *_allTagLabel;
    NSArray *_requireMetaArray;
    NSArray *_itemViewArray;
}

@property(retain, nonatomic) NSArray *itemViewArray; // @synthesize itemViewArray=_itemViewArray;
@property(retain, nonatomic) NSArray *requireMetaArray; // @synthesize requireMetaArray=_requireMetaArray;
@property(retain, nonatomic) UILabel *allTagLabel; // @synthesize allTagLabel=_allTagLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)updateWithMetaArray:(id)arg1;
- (void)updateRequireMetaArrayWithIdArray:(id)arg1;
- (void)setupSubviews;
- (id)initWithRequireMetaIdArray:(id)arg1;

@end

