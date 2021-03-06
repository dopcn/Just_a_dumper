//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject;
@protocol SSShieldDelegate;

@interface SSShield : NSProxy
{
    NSObject *_object;
    id <SSShieldDelegate> _shieldDelegate;
}

@property(nonatomic) __weak id <SSShieldDelegate> shieldDelegate; // @synthesize shieldDelegate=_shieldDelegate;
@property(retain, nonatomic) NSObject *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isProxy;
- (unsigned long long)hash;
- (Class)superclass;
- (_Bool)isEqual:(id)arg1;
- (Class)realClass;
- (id)debugDescription;
- (id)description;
- (Class)class;
- (id)mutableCopy;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)copy;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithObject:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end

