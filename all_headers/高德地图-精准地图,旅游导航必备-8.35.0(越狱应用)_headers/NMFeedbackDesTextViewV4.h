//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMTextView.h"

@class UILabel;

@interface NMFeedbackDesTextViewV4 : NMTextView
{
    UILabel *_placeHolder;
    struct CGSize _placeHolderSize;
    UILabel *_tipLabel;
    _Bool _isPlaceHolderHidden;
    _Bool _isTipHidden;
}

@property(nonatomic) _Bool isTipHidden; // @synthesize isTipHidden=_isTipHidden;
@property(nonatomic) _Bool isPlaceHolderHidden; // @synthesize isPlaceHolderHidden=_isPlaceHolderHidden;
- (void).cxx_destruct;
- (void)setTipLabelTextWithInputWordsNum:(long long)arg1;
- (void)setPlaceHolderText:(id)arg1;
- (void)updateToPortraitSize;
- (void)updateToLandscapeSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)setMaxLength:(long long)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

