//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTNode.h"

#import "ARTContainer-Protocol.h"

@class NSString;

@interface ARTGroup : ARTNode <ARTContainer>
{
    struct CGRect _clipping;
}

@property(nonatomic) struct CGRect clipping; // @synthesize clipping=_clipping;
- (void)renderLayerTo:(struct CGContext *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

