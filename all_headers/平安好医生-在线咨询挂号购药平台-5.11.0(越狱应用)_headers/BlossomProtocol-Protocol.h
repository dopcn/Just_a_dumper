//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseModuleProtocol-Protocol.h"

@class CLLocation, NSDictionary, NSString, NSURL;

@protocol BlossomProtocol <BaseModuleProtocol>
+ (void)blossom_trailWithEvent:(NSString *)arg1 label:(NSString *)arg2 parameters:(NSDictionary *)arg3;
+ (NSURL *)blossom_getTFSUrlWithKey:(NSString *)arg1 size:(struct CGSize)arg2;
+ (NSURL *)blossom_getTFSUrlWithKey:(NSString *)arg1;
+ (CLLocation *)blossom_getLocation;
@end

