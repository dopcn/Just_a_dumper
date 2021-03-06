//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BOSACLCondition, NSArray;

@interface BOSGrant : NSObject
{
    NSArray *_granteeIDArray;
    NSArray *_permission;
    NSArray *_resource;
    BOSACLCondition *_condition;
}

+ (id)permissionToString:(unsigned long long)arg1;
+ (unsigned long long)stringToPermission:(id)arg1;
@property(retain, nonatomic) BOSACLCondition *condition; // @synthesize condition=_condition;
@property(retain, nonatomic) NSArray *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) NSArray *permission; // @synthesize permission=_permission;
@property(retain, nonatomic) NSArray *granteeIDArray; // @synthesize granteeIDArray=_granteeIDArray;
- (void).cxx_destruct;

@end

