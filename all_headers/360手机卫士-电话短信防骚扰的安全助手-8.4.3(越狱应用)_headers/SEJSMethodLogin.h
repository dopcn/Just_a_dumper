//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SEJSMethodBase.h"

@protocol SEJSMethodLoginDelegate;

@interface SEJSMethodLogin : SEJSMethodBase
{
    id <SEJSMethodLoginDelegate> delegate;
}

@property(nonatomic) __weak id <SEJSMethodLoginDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)invoke:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)getName;

@end

