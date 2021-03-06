//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol FBCaptureCoordinatorFilterResourcesFactory, FBCaptureCoordinatorFilterResourcesManagerDelegate;

@interface FBCaptureCoordinatorFilterResourcesManager : NSObject
{
    id <FBCaptureCoordinatorFilterResourcesFactory> _filterResourceFactory;
    unsigned long long _analyticsProductName;
    NSMutableDictionary *_resourcesCache;
    struct mutex _resourcesCacheGuard;
    id <FBCaptureCoordinatorFilterResourcesManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCaptureCoordinatorFilterResourcesManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)discardCachedResources;
- (void)removeCachedResourceOfType:(id)arg1;
- (id)filterResourceOfType:(id)arg1;
- (id)initFilterResourceFactory:(id)arg1 analyticsProductName:(unsigned long long)arg2;
- (id)filterResourcesOfTypes:(id)arg1;

@end

