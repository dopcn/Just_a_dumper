//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MttHTTPSessionManager;

@interface MttGetQQNewsService : NSObject
{
    MttHTTPSessionManager *_afSessionManager;
}

@property(retain, nonatomic) MttHTTPSessionManager *afSessionManager; // @synthesize afSessionManager=_afSessionManager;
- (void).cxx_destruct;
- (void)getQQ24HoursNewsWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)qq24HoursNewsUrl;
- (id)init;

@end

