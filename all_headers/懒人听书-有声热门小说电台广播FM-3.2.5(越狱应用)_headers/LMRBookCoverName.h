//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LMRReactiveView-Protocol.h"

@class LMRBookCoverNameVM, LMRTapUpDownGestureRecognizer, LMTagView, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel;

@interface LMRBookCoverName : UIView <LMRReactiveView>
{
    LMRBookCoverNameVM *_itemViewModel;
    UIImageView *_bookCover;
    UILabel *_bookTitle;
    NSLayoutConstraint *_bookCoverHeightCn;
    UILabel *_autherLabel;
    LMRTapUpDownGestureRecognizer *_tapDownUpGesture;
    UIImageView *_topRankImage;
    UIImage *_highlightImage;
    LMTagView *_tagView;
}

@property(retain, nonatomic) LMTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(nonatomic) __weak UIImageView *topRankImage; // @synthesize topRankImage=_topRankImage;
@property(retain, nonatomic) LMRTapUpDownGestureRecognizer *tapDownUpGesture; // @synthesize tapDownUpGesture=_tapDownUpGesture;
@property(nonatomic) __weak UILabel *autherLabel; // @synthesize autherLabel=_autherLabel;
@property(nonatomic) __weak NSLayoutConstraint *bookCoverHeightCn; // @synthesize bookCoverHeightCn=_bookCoverHeightCn;
@property(retain, nonatomic) UILabel *bookTitle; // @synthesize bookTitle=_bookTitle;
@property(retain, nonatomic) UIImageView *bookCover; // @synthesize bookCover=_bookCover;
@property(retain, nonatomic) LMRBookCoverNameVM *itemViewModel; // @synthesize itemViewModel=_itemViewModel;
- (void).cxx_destruct;
- (void)bindViewModel:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

