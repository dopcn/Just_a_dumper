//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UCPlayerPlayHandlerProtocol-Protocol.h"

@class NSArray, NSString, UCVideoInfo, VBVideoLinkValidator;
@protocol UCPlayerPlayControllerProtocol, UCPlayerPlayHandlerDelegate;

@interface UCPlayerPlayHandler : NSObject <UCPlayerPlayHandlerProtocol>
{
    _Bool m_hasHandle;
    _Bool m_isUserClickForCurrentPlay;
    NSString *m_playingURL;
    UCVideoInfo *m_playingInfo;
    VBVideoLinkValidator *m_linkValidator;
    NSArray *m_videosInfo;
    long long m_currentVideoID;
    long long m_currentVideoIndex;
    id <UCPlayerPlayHandlerDelegate> m_delegate;
    id <UCPlayerPlayControllerProtocol> m_playController;
}

@property(nonatomic) _Bool isUserClickForCurrentPlay; // @synthesize isUserClickForCurrentPlay=m_isUserClickForCurrentPlay;
@property(nonatomic) id <UCPlayerPlayControllerProtocol> playController; // @synthesize playController=m_playController;
@property(nonatomic) id <UCPlayerPlayHandlerDelegate> delegate; // @synthesize delegate=m_delegate;
@property(nonatomic) _Bool hasHandle; // @synthesize hasHandle=m_hasHandle;
@property(nonatomic) long long currentVideoIndex; // @synthesize currentVideoIndex=m_currentVideoIndex;
@property(nonatomic) long long currentVideoID; // @synthesize currentVideoID=m_currentVideoID;
@property(retain, nonatomic) NSArray *videosInfo; // @synthesize videosInfo=m_videosInfo;
@property(retain, nonatomic) VBVideoLinkValidator *linkValidator; // @synthesize linkValidator=m_linkValidator;
@property(copy, nonatomic) UCVideoInfo *playingInfo; // @synthesize playingInfo=m_playingInfo;
@property(copy, nonatomic) NSString *playingURL; // @synthesize playingURL=m_playingURL;
- (void)videoLinkValidationModelValidator:(id)arg1 dataInfo:(id)arg2 forTask:(id)arg3;
- (void)videoLinkValidator:(id)arg1 resultVideoURL:(id)arg2;
- (_Bool)isLastVideoForCurrentPlaying;
- (void)playVideoDidError:(id)arg1;
- (void)syncOutCurrentPlayingVideo:(id)arg1;
- (_Bool)moviePlayerPlayNextVideoIfNeeded;
- (_Bool)isNeedHandlePlayWhenComplete;
- (_Bool)isPlayMovieByHandler;
- (void)playWebVideo:(id)arg1;
- (void)findVideoURLFromPage;
- (id)validationRequestForCurrentPlaying;
- (void)cancelLinkTask;
- (void)playVideoAtIndex:(long long)arg1 userClick:(_Bool)arg2;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 currentVideoID:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

