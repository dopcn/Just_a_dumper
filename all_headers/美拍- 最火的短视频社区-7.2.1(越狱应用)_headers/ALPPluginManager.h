//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALPSafeMutableDictionary;

@interface ALPPluginManager : NSObject
{
    ALPSafeMutableDictionary *_pluginDic;
}

+ (id)shareInstance;
@property(retain) ALPSafeMutableDictionary *pluginDic; // @synthesize pluginDic=_pluginDic;
- (void).cxx_destruct;
- (id)plugins;
- (id)searchPluginWithKey:(id)arg1;
- (_Bool)registerPlugin:(id)arg1;
- (id)init;

@end

