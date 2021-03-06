//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MISScope, MISScopeBuilder, NSDictionary, NSString;
@protocol MISPageDelegate, MISScopeProtocol, MISStreamProtocol;

@protocol MISScopeProtocol <NSObject>
+ (MISScopeBuilder *)builder;
+ (NSString *)parentName;
+ (NSString *)name;
@property(readonly, nonatomic) id <MISScopeProtocol> parent;
@property(readonly, nonatomic) __weak id <MISPageDelegate> pageDelegate;
- (id <MISStreamProtocol>)streamWithName:(NSString *)arg1;
- (id <MISScopeProtocol>)childScopeWithName:(NSString *)arg1;
- (void)addChild:(MISScope *)arg1;
- (void)updateParent:(MISScope *)arg1;
- (void)dispatchOnDestory;
- (void)dispatchOncreate;
- (id)initWithScopeWithName:(NSString *)arg1 providers:(NSDictionary *)arg2 pageDelegate:(id <MISPageDelegate>)arg3;
@end

