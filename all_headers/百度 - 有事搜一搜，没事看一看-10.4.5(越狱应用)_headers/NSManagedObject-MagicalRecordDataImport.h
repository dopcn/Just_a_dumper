//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "MagicalRecordDataImportProtocol-Protocol.h"

@class NSString;

@interface NSManagedObject (MagicalRecordDataImport) <MagicalRecordDataImportProtocol>
+ (id)MR_importFromArray:(id)arg1 inContext:(id)arg2;
+ (id)MR_importFromArray:(id)arg1;
+ (id)MR_importFromObject:(id)arg1;
+ (id)MR_importFromObject:(id)arg1 inContext:(id)arg2;
- (_Bool)MR_importValuesForKeysWithObject:(id)arg1;
- (_Bool)MR_importValuesForKeysWithObject:(id)arg1 establishRelationshipBlock:(CDUnknownBlockType)arg2;
- (id)MR_lookupObjectForRelationship:(id)arg1 fromData:(id)arg2;
- (_Bool)MR_postImport:(id)arg1;
- (_Bool)MR_preImport:(id)arg1;
- (void)MR_setRelationships:(id)arg1 forKeysWithObject:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)MR_setAttributes:(id)arg1 forKeysWithObject:(id)arg2;
- (void)MR_setRelationship:(id)arg1 relatedData:(id)arg2 setRelationshipBlock:(CDUnknownBlockType)arg3;
- (void)MR_setAttribute:(id)arg1 withValueFromObject:(id)arg2;
- (void)MR_setObject:(id)arg1 forRelationship:(id)arg2;
- (_Bool)MR_shouldImportData:(id)arg1 forRelationshipNamed:(id)arg2;
- (_Bool)MR_importValue:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

