//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BBANovelCatalogRequestDescription : NSObject
{
    NSString *_gid;
    NSString *_cpsrc;
    NSString *_cid;
    NSString *_cidList;
    NSString *_updateTime;
}

@property(copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *cidList; // @synthesize cidList=_cidList;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *cpsrc; // @synthesize cpsrc=_cpsrc;
@property(retain, nonatomic) NSString *gid; // @synthesize gid=_gid;
- (void).cxx_destruct;
- (void)dealloc;

@end

