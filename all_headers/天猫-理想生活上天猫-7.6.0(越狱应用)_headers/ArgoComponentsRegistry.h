//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ArgoComponentsRegistry : NSObject
{
    NSMutableDictionary *_components;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)getArgoComponentClassNameByType:(id)arg1;
- (void)registerArgoComponentWithType:(id)arg1 andClassName:(id)arg2;
- (void)registerComponents;
- (id)init;

@end

