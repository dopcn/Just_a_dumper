//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSArray, NSString;

@interface NMPlayListDelSongRequest : NMBaseRequest
{
    NSString *_playlistId;
    NSArray *_songIds;
    _Bool _needDeleteFile;
    NSArray *_songIdsWithCloudState;
}

@property(nonatomic) _Bool needDeleteFile; // @synthesize needDeleteFile=_needDeleteFile;
@property(retain, nonatomic) NSArray *songIdsWithCloudState; // @synthesize songIdsWithCloudState=_songIdsWithCloudState;
@property(retain, nonatomic) NSArray *songIds; // @synthesize songIds=_songIds;
@property(retain, nonatomic) NSString *playlistId; // @synthesize playlistId=_playlistId;
- (void).cxx_destruct;
- (id)initWithPlaylistId:(id)arg1 songIdsWithCloudState:(id)arg2 songIds:(id)arg3;

@end

