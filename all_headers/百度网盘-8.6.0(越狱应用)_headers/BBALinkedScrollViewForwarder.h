//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIView;
@protocol UIScrollViewDelegate;

@interface BBALinkedScrollViewForwarder : NSObject <UIScrollViewDelegate>
{
    UIView *_linkedScrollV;
    id <UIScrollViewDelegate> _scrollDelegate;
}

@property(nonatomic) __weak id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak UIView *linkedScrollV; // @synthesize linkedScrollV=_linkedScrollV;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

