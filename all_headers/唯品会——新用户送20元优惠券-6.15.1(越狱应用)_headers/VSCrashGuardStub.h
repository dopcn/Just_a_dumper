//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VSCrashGuardStub : NSObject
{
    id _target;
    Class _targetCls;
    CDUnknownBlockType _revoker;
}

@property(copy, nonatomic) CDUnknownBlockType revoker; // @synthesize revoker=_revoker;
@property(readonly, nonatomic) Class targetCls; // @synthesize targetCls=_targetCls;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)revoke;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 revoker:(CDUnknownBlockType)arg2;
- (id)initWithTarget:(id)arg1;

@end

