//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RACDisposable;
@protocol SAKABTestModelProtocol;

@interface SAKABTestService : NSObject
{
    id <SAKABTestModelProtocol> _model;
    RACDisposable *_outgoingDisposable;
    NSMutableDictionary *_defaultItems;
    RACDisposable *_debugItemsChangedDisposable;
}

+ (id)compaignString;
+ (id)loadABTestListWithKey:(id)arg1;
+ (void)saveABTestListWithKey:(id)arg1;
+ (id)remoteItems;
+ (id)activeLocalItems;
+ (id)sharedABTestService;
+ (void)initialize;
@property(retain, nonatomic) RACDisposable *debugItemsChangedDisposable; // @synthesize debugItemsChangedDisposable=_debugItemsChangedDisposable;
@property(retain, nonatomic) NSMutableDictionary *defaultItems; // @synthesize defaultItems=_defaultItems;
@property(retain, nonatomic) RACDisposable *outgoingDisposable; // @synthesize outgoingDisposable=_outgoingDisposable;
@property(retain, nonatomic) id <SAKABTestModelProtocol> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)remoteTests;
- (id)defaultTests;
- (id)testForKey:(id)arg1;
- (id)fetchAllABTests;
- (void)addDefaultValues:(id)arg1;
- (id)init;

@end

