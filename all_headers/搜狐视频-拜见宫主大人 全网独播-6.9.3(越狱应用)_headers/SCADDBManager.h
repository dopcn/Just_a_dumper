//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCADDatabaseQueue;

@interface SCADDBManager : NSObject
{
    NSString *_dbPath;
    SCADDatabaseQueue *_dbQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SCADDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(copy, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
- (void).cxx_destruct;
- (id)dbFilePathWithName:(id)arg1;
- (void)doOperationInTransaction:(CDUnknownBlockType)arg1;
- (void)doOperationInDatabase:(CDUnknownBlockType)arg1;
- (void)setupWithDBName:(id)arg1 sqlList:(id)arg2;

@end

