//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FspP2PCmd.h"

@interface FspSetGlobeParamCmd : FspP2PCmd
{
    int _paramId;
    int _value;
}

- (void)excuse;
- (id)initWithParamId:(int)arg1 value:(int)arg2;

@end

