//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMSocialJobFactory : NSObject
{
}

+ (id)sharedInstance;
- (id)getPostLikeBaseDictionary:(id)arg1;
- (id)getBindingBaseDictionary:(id)arg1;
- (id)getPostCommentBaseDictionary;
- (id)getPostShareMultiBaseDictionary:(id)arg1;
- (id)getPostShareBaseDictionary:(id)arg1;
- (id)createSocialJob:(int)arg1 paramDictionary:(id)arg2;
- (id)createVirtualSocialJob:(int)arg1 paramDictionary:(id)arg2;
- (id)getEntityKey;

@end

