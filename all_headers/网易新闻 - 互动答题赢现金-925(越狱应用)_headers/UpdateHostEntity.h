//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RespEntity.h"

@class NSString;

@interface UpdateHostEntity : RespEntity
{
    long long _userId;
    NSString *_ursId;
    long long _roomId;
    long long _videoId;
}

@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *ursId; // @synthesize ursId=_ursId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithJson:(id)arg1;

@end

