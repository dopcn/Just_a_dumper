//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMComponent.h"

@class NSMutableArray, UIView;

@interface FMQueueViewComponent : FMComponent
{
    UIView *_listView;
    NSMutableArray *_components;
}

@property(retain, nonatomic) NSMutableArray *components; // @synthesize components=_components;
@property(nonatomic) __weak UIView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)setComponentContext:(id)arg1;
- (void)enumerateUsingBlockInMain:(CDUnknownBlockType)arg1 needReload:(_Bool)arg2;
- (void)reload;
- (void)reloadComponentWithIndex:(unsigned long long)arg1;
- (void)deleteComponentWithIndex:(unsigned long long)arg1;
- (void)resetComponents:(id)arg1;
- (_Bool)insertComponent:(id)arg1 beforeComponent:(id)arg2;
- (_Bool)addComponent:(id)arg1;
- (_Bool)removeComponent:(id)arg1 withRowAnimation:(long long)arg2;
- (id)findComponentIndex:(id)arg1;
- (id)initWithViewComponents:(id)arg1 withContext:(id)arg2;

@end

