//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTAnimatedNode.h"

@class NSMutableDictionary, NSNumber, NSString, RCTUIManager;

@interface RCTPropsAnimatedNode : RCTAnimatedNode
{
    NSNumber *_connectedViewTag;
    NSString *_connectedViewName;
    RCTUIManager *_uiManager;
    NSMutableDictionary *_propsDictionary;
}

- (void).cxx_destruct;
- (void)performUpdate;
- (id)propertyNameForParentTag:(id)arg1;
- (void)restoreDefaultValues;
- (void)disconnectFromView:(id)arg1;
- (void)connectToView:(id)arg1 viewName:(id)arg2 uiManager:(id)arg3;
- (id)initWithTag:(id)arg1 config:(id)arg2;

@end

