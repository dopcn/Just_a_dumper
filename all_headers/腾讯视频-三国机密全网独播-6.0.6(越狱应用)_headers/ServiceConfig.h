//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JSONObjectCoding-Protocol.h"

@class NSString;
@protocol ServiceConfigDelegate;

@interface ServiceConfig : NSObject <JSONObjectCoding>
{
    _Bool _hasObservers;
    _Bool _connected;
    _Bool _wasConnected;
    NSString *_UUID;
    double _lastDetection;
    id <ServiceConfigDelegate> _delegate;
}

+ (id)serviceConfigWithJSONObject:(id)arg1;
@property(nonatomic) __weak id <ServiceConfigDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double lastDetection; // @synthesize lastDetection=_lastDetection;
@property(nonatomic) _Bool wasConnected; // @synthesize wasConnected=_wasConnected;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)toJSONObject;
- (id)initWithJSONObject:(id)arg1;
- (void)dealloc;
- (void)removeObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObservers;
- (id)initWithServiceDescription:(id)arg1;
- (id)initWithServiceConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

