//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KWLNetSrcRequestClient.h"

@interface KWLGetSonglistInRoomRequest : KWLNetSrcRequestClient
{
    int _pageNo;
    int _pageSize;
    unsigned long long _anchorId;
}

@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) unsigned long long anchorId; // @synthesize anchorId=_anchorId;
- (_Bool)buildURL:(char *)arg1 len:(int)arg2;

@end

