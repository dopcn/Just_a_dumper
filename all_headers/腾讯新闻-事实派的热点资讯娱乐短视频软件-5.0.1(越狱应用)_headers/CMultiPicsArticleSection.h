//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CArticleSection.h"

#import "CPictViewDelegate-Protocol.h"
#import "QNDetailImageProgressViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CArticleContentImageNodeType, CArticleContentVideoExtendNode, CPictView, MTLabel, NSString, QNDetailImageProgressView, UILabel, UIScrollView;

@interface CMultiPicsArticleSection : CArticleSection <UIScrollViewDelegate, CPictViewDelegate, QNDetailImageProgressViewDelegate>
{
    MTLabel *_desc;
    _Bool _scrollableLayoutEnabled;
    CPictView *_pic;
    UIScrollView *_scroll;
    UILabel *_text;
    CArticleContentVideoExtendNode *_videoNode;
    CArticleContentImageNodeType *_imageNode;
    long long _picPosStatus;
    QNDetailImageProgressView *_progressView;
    struct CGPoint _picOffset;
}

+ (struct CGRect)preComputerFrameWithData:(id)arg1 withMaxWidth:(double)arg2;
@property(retain, nonatomic) QNDetailImageProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) long long picPosStatus; // @synthesize picPosStatus=_picPosStatus;
@property(nonatomic) struct CGPoint picOffset; // @synthesize picOffset=_picOffset;
@property(nonatomic) _Bool scrollableLayoutEnabled; // @synthesize scrollableLayoutEnabled=_scrollableLayoutEnabled;
@property(retain, nonatomic) CArticleContentImageNodeType *imageNode; // @synthesize imageNode=_imageNode;
@property(retain, nonatomic) CArticleContentVideoExtendNode *videoNode; // @synthesize videoNode=_videoNode;
@property(readonly, nonatomic) UILabel *text; // @synthesize text=_text;
@property(readonly, nonatomic) UIScrollView *scroll; // @synthesize scroll=_scroll;
@property(readonly, nonatomic) CPictView *pic; // @synthesize pic=_pic;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onCancelButtonTaped:(id)arg1;
- (void)originalImageLoadIsFailed:(id)arg1;
- (void)originalImageLoadIsFinished:(id)arg1;
- (void)normalImageLoadIsFailed:(id)arg1;
- (void)normalImageLoadIsFinished:(id)arg1;
- (void)pictImageIsReplaced:(id)arg1;
- (void)pictView:(id)arg1 loadProgressChangedCurrent:(long long)arg2 total:(long long)arg3;
- (void)p_handleTapToLoad:(id)arg1;
- (void)p_dismissTapToLoadView;
- (void)p_showTapToLoadView;
- (void)p_dismissProgressView;
- (void)p_showProgressView:(_Bool)arg1;
- (void)p_showProgressView;
- (void)setFrame:(struct CGRect)arg1;
- (void)p_validPictLayout;
- (id)imageUrl;
- (_Bool)couldLoadOriginalImage;
- (_Bool)isLoadingOriginalImage;
- (void)loadOriginalImage;
- (void)loadImage;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)disableScale:(_Bool)arg1;
- (_Bool)isSetText;
- (void)clearTextContent;
- (void)setTextContent:(id)arg1 withMaxWidth:(double)arg2;
- (void)skinModeChanged;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

