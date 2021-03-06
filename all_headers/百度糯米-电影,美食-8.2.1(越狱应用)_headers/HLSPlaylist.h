//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSMutableOrderedSet, NSMutableString, NSString;

@interface HLSPlaylist : NSObject
{
    _Bool _isMasterPlaylist;
    NSString *_baseURL;
    NSData *_originData;
    NSMutableArray *_playlists;
    NSString *_keyURL;
    NSMutableOrderedSet *_urlSet;
    NSMutableString *_transformedContents;
}

@property(retain, nonatomic) NSMutableString *transformedContents; // @synthesize transformedContents=_transformedContents;
@property(retain, nonatomic) NSMutableOrderedSet *urlSet; // @synthesize urlSet=_urlSet;
@property(copy, nonatomic) NSString *keyURL; // @synthesize keyURL=_keyURL;
@property(retain, nonatomic) NSMutableArray *playlists; // @synthesize playlists=_playlists;
@property(nonatomic) _Bool isMasterPlaylist; // @synthesize isMasterPlaylist=_isMasterPlaylist;
@property(retain, nonatomic) NSData *originData; // @synthesize originData=_originData;
@property(copy, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)init;

@end

