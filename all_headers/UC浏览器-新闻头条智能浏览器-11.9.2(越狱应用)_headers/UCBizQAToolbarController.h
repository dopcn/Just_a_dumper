//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BizToolbarBase.h"

#import "IUSQAObserver-Protocol.h"
#import "UCBizQAToolViewDelegate-Protocol.h"

@class NSString, NewsReaderToolBar, UCBizQAToolView;
@protocol IBizServiceHandler;

@interface UCBizQAToolbarController : BizToolbarBase <UCBizQAToolViewDelegate, IUSQAObserver>
{
    NewsReaderToolBar *_toolbar;
    UCBizQAToolView *_toolView;
    id <IBizServiceHandler> _serviceHandler;
}

@property(retain, nonatomic) id <IBizServiceHandler> serviceHandler; // @synthesize serviceHandler=_serviceHandler;
@property(retain, nonatomic) UCBizQAToolView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) NewsReaderToolBar *toolbar; // @synthesize toolbar=_toolbar;
- (void)buttonClicked:(long long)arg1;
- (void)showQALikeCount:(long long)arg1 isLiked:(_Bool)arg2 hasNext:(_Bool)arg3;
- (void)initToolViewWithItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2 webPage:(id)arg3 serviceHandler:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

