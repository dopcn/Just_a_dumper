//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol UCPopLayerScreenServiceDelegate;

@interface UCPopLayerScreenService : NSObject
{
    id <UCPopLayerScreenServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <UCPopLayerScreenServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isPortraitInterface;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1;
- (id)init;
- (void)dealloc;

@end

