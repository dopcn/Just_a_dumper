//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QWHPersistLockManager : NSObject
{
    NSMutableDictionary *_locks;
}

+ (id)shareManager;
@property(retain, nonatomic) NSMutableDictionary *locks; // @synthesize locks=_locks;
- (void).cxx_destruct;
- (id)getLock:(id)arg1;

@end

