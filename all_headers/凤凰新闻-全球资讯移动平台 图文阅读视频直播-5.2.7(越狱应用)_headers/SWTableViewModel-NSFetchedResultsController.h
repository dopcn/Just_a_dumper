//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWTableViewModel.h"

#import "NSFetchedResultsControllerDelegate-Protocol.h"

@class NSString;

@interface SWTableViewModel (NSFetchedResultsController) <NSFetchedResultsControllerDelegate>
+ (id)newWithFetchResultsController:(id)arg1 andConvertor:(CDUnknownBlockType)arg2;
- (void)updateWithPatchDictionary:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)setFetchChangedObjects:(id)arg1;
- (id)fetchChangedObjects;
@property(copy, nonatomic) CDUnknownBlockType fetchConvertor;
- (id)convertFetchSectionInfo2SectionViewModel:(id)arg1;
- (void)syncWithFetchController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

