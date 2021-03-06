//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "YWNewFRCStrategy-Protocol.h"

@class NSMutableArray, NSString, YWNewFetchedResultsController;

@interface YWNewFRCStrategyBackThread : NSObject <YWNewFRCStrategy>
{
    YWNewFetchedResultsController *_ywNewFRC;
    NSMutableArray *_changeInfoArray;
}

@property(retain, nonatomic) NSMutableArray *changeInfoArray; // @synthesize changeInfoArray=_changeInfoArray;
@property(nonatomic) __weak YWNewFetchedResultsController *ywNewFRC; // @synthesize ywNewFRC=_ywNewFRC;
- (void).cxx_destruct;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (id)getYWSectionFromNSSection:(id)arg1 needObjects:(_Bool)arg2;
- (id)getResultObjectFromThreadSafeObject:(id)arg1;
- (id)getThreadSafeObjectForManagedObject:(id)arg1 refreshCache:(_Bool)arg2;
- (id)getResultArrayFromThreadSafeObjectArray:(id)arg1;
- (id)getThreadSafeObjectsForManagedObjectArray:(id)arg1 refreshCache:(_Bool)arg2;
- (void)getRealResultFromThreadSafeObjects:(id)arg1 sections:(id)arg2;
- (void)processOriginResultsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)performFetch:(id *)arg1;
- (void)performFetchWithResultBlock:(CDUnknownBlockType)arg1;
- (id)initWithYWNewFRC:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

