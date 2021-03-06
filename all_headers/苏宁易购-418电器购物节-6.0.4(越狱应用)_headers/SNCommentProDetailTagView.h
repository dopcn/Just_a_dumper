//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UILabel;
@protocol SNCommentProDetailTagViewDelegate;

@interface SNCommentProDetailTagView : UIView
{
    id <SNCommentProDetailTagViewDelegate> _delegate;
    UIView *_goodRateView;
    UILabel *_goodRatingLabel;
    UIView *_tagView;
    UIView *_bottomLine;
    NSArray *_commonTags;
    NSArray *_specialTags;
    NSMutableArray *_commonBtns;
    NSMutableArray *_specialBtns;
}

@property(retain, nonatomic) NSMutableArray *specialBtns; // @synthesize specialBtns=_specialBtns;
@property(retain, nonatomic) NSMutableArray *commonBtns; // @synthesize commonBtns=_commonBtns;
@property(retain, nonatomic) NSArray *specialTags; // @synthesize specialTags=_specialTags;
@property(retain, nonatomic) NSArray *commonTags; // @synthesize commonTags=_commonTags;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *goodRatingLabel; // @synthesize goodRatingLabel=_goodRatingLabel;
@property(retain, nonatomic) UIView *goodRateView; // @synthesize goodRateView=_goodRateView;
@property(nonatomic) __weak id <SNCommentProDetailTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commonBtnClicked:(id)arg1;
- (void)specialBtnClicked:(id)arg1;
- (void)layoutTagView;
- (void)loadCommonTag:(id)arg1;
- (void)loadSpecialTag:(id)arg1;
- (void)setGoodRate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

