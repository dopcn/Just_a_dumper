//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MiPushUDID : NSObject
{
}

+ (id)value;
+ (void)save:(id)arg1;
+ (void)saveUDIDToUserDefaults:(id)arg1;
+ (id)udidInUserDefaults;
+ (void)saveUDIDToPasteboard:(id)arg1;
+ (id)udidInPasteboard;
+ (void)saveUDIDToKeychain:(id)arg1;
+ (id)udidInKeychain;
+ (id)randomUDID;
+ (id)appleIDFV;
+ (id)appleIDFA;

@end

