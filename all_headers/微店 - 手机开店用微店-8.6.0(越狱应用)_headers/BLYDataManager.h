//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface BLYDataManager : NSObject
{
    NSObject<OS_dispatch_queue> *_keyValueQueue;
    NSObject<OS_dispatch_queue> *_keyValueSubscriptionQueue;
    NSMutableDictionary *_keyValueCache;
    NSMutableDictionary *_keyValueStorage;
    NSMutableArray *_kvoModels;
    NSOperationQueue *_fileQueue;
}

+ (id)sharedManager;
@property(retain) NSOperationQueue *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain) NSObject<OS_dispatch_queue> *keyValueSubscriptionQueue; // @synthesize keyValueSubscriptionQueue=_keyValueSubscriptionQueue;
@property(retain) NSObject<OS_dispatch_queue> *keyValueQueue; // @synthesize keyValueQueue=_keyValueQueue;
- (void).cxx_destruct;
- (_Bool)removeSubscriber:(id)arg1 forKey:(id)arg2;
- (_Bool)addSubscriber:(id)arg1 forKey:(id)arg2;
- (_Bool)isSubscriber:(id)arg1 existForKey:(id)arg2;
- (id)kvoModelForKey:(id)arg1;
- (_Bool)isKeySubscriped:(id)arg1;
- (void)notifySubscribersForValue:(id)arg1 changedForKey:(id)arg2;
- (id)allFileURLWithPriority:(long long)arg1;
- (void)createApplicationSupportDirectoryIfNeeded;
- (void)createFolderAtPathIfNeeded:(id)arg1;
- (id)folderPathForPersistenceType:(long long)arg1;
- (id)fileNameForPersitenceType:(long long)arg1;
- (void)deleteFileAtPath:(id)arg1;
- (void)sendDataSavedNotificationSuccess:(_Bool)arg1;
- (id)dataAtPath:(id)arg1;
- (id)savedKeyValueStorage;
- (void)persistData:(id)arg1 ofType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)deleteFileWithKey:(id)arg1 persistenceType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)fetchObjFromFileWithFileName:(id)arg1 persistenceType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)fetchObjFromFileWithFileName:(id)arg1 persistenceType:(long long)arg2;
- (id)fetchObjWithKey:(id)arg1 persistenceType:(long long)arg2;
- (void)fetchObjWithKey:(id)arg1 persistenceType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)persistObj:(id)arg1 persistenceType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)buglyRootFilePath;
- (void)deleteAllCrashFiles;
- (void)deleteAllFilesExceptCrash;
- (id)allFilesExceptCrash;
- (id)allCrashFileURL;
- (id)errorWithDescription:(id)arg1;
- (void)clearKeyValueStorage;
- (void)clearKeyValueCache;
- (id)fetchStringForKey:(id)arg1;
- (id)fetchValueForKey:(id)arg1;
- (void)persistValue:(id)arg1 forKey:(id)arg2;
- (void)saveValue:(id)arg1 forKey:(id)arg2;
- (void)fetchValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)batchSave:(id)arg1 persistence:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)batchFetch:(id)arg1;
- (void)saveValue:(id)arg1 forKey:(id)arg2 persistence:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain) NSMutableArray *kvoModels; // @synthesize kvoModels=_kvoModels;
@property(retain) NSMutableDictionary *keyValueStorage; // @synthesize keyValueStorage=_keyValueStorage;
@property(retain) NSMutableDictionary *keyValueCache; // @synthesize keyValueCache=_keyValueCache;
- (void)removeOldFolder;
- (id)init;

@end

