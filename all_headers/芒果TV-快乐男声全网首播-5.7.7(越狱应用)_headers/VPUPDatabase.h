//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface VPUPDatabase : NSObject
{
    void *_db;
    _Bool _inTransaction;
    _Bool _isInTransaction;
    NSString *_databasePath;
}

+ (id)databaseWithPath:(id)arg1;
@property(readonly, nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (_Bool)inTransaction;
- (_Bool)beginTransaction;
- (_Bool)beginDeferredTransaction;
- (_Bool)commit;
- (_Bool)rollback;
- (id)executeQueryWithSQLString:(id)arg1;
- (id)executeQuery:(id)arg1;
- (_Bool)executeUpdateWithSQLString:(id)arg1;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)databaseExists;
- (_Bool)close;
- (_Bool)open;
- (id)initWithPath:(id)arg1;

@end

