//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface BMSceneDesc : NSObject
{
    NSString *_sceneClassName;
    NSDictionary *_userinfo;
}

+ (id)descWithSceneClassName:(id)arg1;
@property(retain, nonatomic) NSDictionary *userinfo; // @synthesize userinfo=_userinfo;
@property(copy, nonatomic) NSString *sceneClassName; // @synthesize sceneClassName=_sceneClassName;
- (void).cxx_destruct;

@end

