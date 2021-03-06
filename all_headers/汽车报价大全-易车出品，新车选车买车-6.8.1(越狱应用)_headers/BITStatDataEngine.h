//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface BITStatDataEngine : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (void)deleteEntityName:(id)arg1 predicate:(id)arg2;
- (id)fetchExistEntity:(id)arg1 withPredicate:(id)arg2;
- (id)fetchEntites:(id)arg1 withPredicate:(id)arg2 orderBy:(id)arg3;
- (id)applicationDocumentsDirectory;
- (void)saveContext;
- (id)init;
- (id)filePath;

@end

