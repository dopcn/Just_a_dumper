//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVLiveChannelListDataDelegate-Protocol.h"

@class GeneralDataRequestHandler, NSMutableArray, NSString, TVLiveChannelInfo, TVLiveChannelListInfo, TVLiveProgramInfo;
@protocol TVLiveChannelMainDataDelegate;

@interface TVLiveChannelMainData : NSObject <TVLiveChannelListDataDelegate>
{
    NSMutableArray *_channelListsArray;
    NSMutableArray *_channelListsRequestArray;
    GeneralDataRequestHandler *_channelListRequestHandler;
    TVLiveChannelListInfo *_currentlistInfo;
    TVLiveChannelInfo *_currentChannelInfo;
    TVLiveProgramInfo *_playingProgram;
    id <TVLiveChannelMainDataDelegate> _mainDataDelegate;
}

@property(nonatomic) id <TVLiveChannelMainDataDelegate> mainDataDelegate; // @synthesize mainDataDelegate=_mainDataDelegate;
@property(retain, nonatomic) TVLiveProgramInfo *playingProgram; // @synthesize playingProgram=_playingProgram;
@property(retain, nonatomic) TVLiveChannelInfo *currentChannelInfo; // @synthesize currentChannelInfo=_currentChannelInfo;
@property(retain, nonatomic) TVLiveChannelListInfo *currentlistInfo; // @synthesize currentlistInfo=_currentlistInfo;
@property(retain, nonatomic) GeneralDataRequestHandler *channelListRequestHandler; // @synthesize channelListRequestHandler=_channelListRequestHandler;
@property(retain, nonatomic) NSMutableArray *channelListsRequestArray; // @synthesize channelListsRequestArray=_channelListsRequestArray;
@property(retain, nonatomic) NSMutableArray *channelListsArray; // @synthesize channelListsArray=_channelListsArray;
- (void)tvLiveChannelDataRequestType:(unsigned long long)arg1 withListInfo:(id)arg2 andChannelInfo:(id)arg3;
- (void)requestChannelProgramsWithDays:(id)arg1 andChannelIndex:(int)arg2;
- (void)requestplayingChannelCurrentAndNextWithindex;
- (void)requestChannelListWithIndex:(int)arg1;
- (void)requestChannelListError:(id)arg1;
- (void)requestChannelListSuccess:(id)arg1;
- (void)requestChannelList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

