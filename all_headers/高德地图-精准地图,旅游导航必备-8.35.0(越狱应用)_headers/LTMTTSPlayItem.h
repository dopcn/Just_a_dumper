//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LTMTTSPlayItem : NSObject
{
    NSString *_text;
    CDUnknownBlockType _complectionBlock;
    NSDictionary *_userInfo;
    id _owner;
}

+ (id)itemWithText:(id)arg1 complectionBlock:(CDUnknownBlockType)arg2 userInfo:(id)arg3 andOwner:(id)arg4;
+ (id)itemWithText:(id)arg1 complectionBlock:(CDUnknownBlockType)arg2;
+ (id)itemWithText:(id)arg1;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) CDUnknownBlockType complectionBlock; // @synthesize complectionBlock=_complectionBlock;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

