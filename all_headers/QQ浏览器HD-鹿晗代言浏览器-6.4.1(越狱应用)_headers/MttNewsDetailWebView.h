//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MttWebViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MttNewsDragLoadView, MttPlugInProxy, MttUIActivityIndicatorView, NSString;
@protocol MttNewsDetailWebViewDelegate, MttWebView;

@interface MttNewsDetailWebView : UIView <MttWebViewDelegate, UIScrollViewDelegate>
{
    int _feedType;
    id <MttNewsDetailWebViewDelegate> _newsDelegate;
    NSString *_currentNewsID;
    NSString *_currentChannelID;
    NSString *_currentSourceUrl;
    struct UIView *_webView;
    MttPlugInProxy *_plugInProxy;
    MttUIActivityIndicatorView *_loadingIndicator;
    MttNewsDragLoadView *_prevArrowView;
    MttNewsDragLoadView *_nextArrowView;
    struct _NSRange _newsRange;
}

@property(retain, nonatomic) MttNewsDragLoadView *nextArrowView; // @synthesize nextArrowView=_nextArrowView;
@property(retain, nonatomic) MttNewsDragLoadView *prevArrowView; // @synthesize prevArrowView=_prevArrowView;
@property(retain, nonatomic) MttUIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) MttPlugInProxy *plugInProxy; // @synthesize plugInProxy=_plugInProxy;
@property(retain, nonatomic) UIView<MttWebView> *webView; // @synthesize webView=_webView;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSString *currentSourceUrl; // @synthesize currentSourceUrl=_currentSourceUrl;
@property(retain, nonatomic) NSString *currentChannelID; // @synthesize currentChannelID=_currentChannelID;
@property(retain, nonatomic) NSString *currentNewsID; // @synthesize currentNewsID=_currentNewsID;
@property(nonatomic) __weak id <MttNewsDetailWebViewDelegate> newsDelegate; // @synthesize newsDelegate=_newsDelegate;
@property(nonatomic) struct _NSRange newsRange; // @synthesize newsRange=_newsRange;
- (void).cxx_destruct;
- (void)tryToAdStat:(id)arg1;
- (void)mttWebView:(struct UIView *)arg1 didSearchText:(id)arg2;
- (void)mttWebViewMainFrameFinished:(struct UIView *)arg1;
- (void)mttWebView:(struct UIView *)arg1 didSaveImageToAlbumWithURLString:(id)arg2 referer:(id)arg3 imageData:(id)arg4;
- (void)mttWebView:(struct UIView *)arg1 didDownloadFileWithURLString:(id)arg2 fileName:(id)arg3 referer:(id)arg4;
- (void)mttWebView:(struct UIView *)arg1 didFailNavigationWithError:(id)arg2 isMainFrameError:(_Bool)arg3;
- (void)mttWebViewDidFinishNavigation:(id)arg1;
- (_Bool)mttWebView:(struct UIView *)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (_Bool)mttWebView:(struct UIView *)arg1 decidePolicyWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (void)postCommentInfo:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleMttMessage:(id)arg1;
- (id)shareImageData;
- (id)shareImageUrl;
- (id)shareTitle;
- (id)soureUrl;
- (void)addLoadingView;
- (void)addIndicators;
- (void)showErrorView;
- (void)hideWaitView;
- (void)showWaitView;
- (id)jsStringFromData:(id)arg1;
- (void)clear;
- (void)cleanBeforeExit;
- (void)loadArticleRecommends:(id)arg1;
- (void)loadArticleComments:(id)arg1;
- (void)loadRecommendNewsWithNewsID:(id)arg1 channelID:(id)arg2 sourceUrl:(id)arg3;
- (void)loadHotCommentWithVideoID:(id)arg1 channelID:(id)arg2;
- (void)loadHotCommentWithNewsID:(id)arg1 channelID:(id)arg2;
- (void)loadQQ24HoursData:(id)arg1;
- (void)loadTopicData:(id)arg1;
- (void)loadVideoData:(id)arg1;
- (void)loadArticleData:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

