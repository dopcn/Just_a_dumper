//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface UCSPVideoShowUpdataResponseItem : NSObject
{
    long long _updateStatus;
    long long _showID;
    long long _lastestEpisode;
    NSString *_showInfoJSON;
    NSString *_lastUpdateDate;
}

@property(retain, nonatomic) NSString *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) NSString *showInfoJSON; // @synthesize showInfoJSON=_showInfoJSON;
@property(nonatomic) long long lastestEpisode; // @synthesize lastestEpisode=_lastestEpisode;
@property(nonatomic) long long showID; // @synthesize showID=_showID;
@property(nonatomic) long long updateStatus; // @synthesize updateStatus=_updateStatus;
- (void)dealloc;

@end

