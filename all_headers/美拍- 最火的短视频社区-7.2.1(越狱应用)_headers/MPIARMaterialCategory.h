//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSNumber, NSOrderedSet, NSString;

@interface MPIARMaterialCategory : NSManagedObject
{
}

+ (id)defaultPredicateWithMaterialType:(unsigned long long)arg1;
+ (id)defaultSortDescriptiors;
+ (id)entityName;
+ (id)allCategoriesWithType:(unsigned long long)arg1;
+ (id)defaultMapping;
+ (id)fetchRequest;
- (_Bool)hasNewAR;
- (void)updateLastMaterialIDs:(id)arg1;
- (void)refreshLastMaterialIDs;
- (_Bool)isBackgroundMaterialCategory;

// Remaining properties
@property(copy, nonatomic) NSNumber *categoryID; // @dynamic categoryID;
@property(copy, nonatomic) NSNumber *index; // @dynamic index;
@property(retain, nonatomic) NSArray *lastMaterialIDs; // @dynamic lastMaterialIDs;
@property(retain, nonatomic) NSOrderedSet *materials; // @dynamic materials;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSNumber *showNewTip; // @dynamic showNewTip;
@property(copy, nonatomic) NSNumber *type; // @dynamic type;

@end

