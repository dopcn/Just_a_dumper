//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSOrderedSet, NSSet, NSString;

@interface _TtC4MYXJ21MaterialCategoryModel : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) NSSet *arrInternationalizationDataInfo; // @dynamic arrInternationalizationDataInfo;
@property(nonatomic, retain) NSOrderedSet *arrMaterialModels; // @dynamic arrMaterialModels;
@property(nonatomic, copy) NSString *categoryID; // @dynamic categoryID;
@property(nonatomic, copy) NSString *color; // @dynamic color;
@property(nonatomic, copy) NSString *detailImg; // @dynamic detailImg;
@property(nonatomic, retain) NSDate *downloadTime; // @dynamic downloadTime;
@property(nonatomic, retain) NSNumber *hasShowNewInCamera; // @dynamic hasShowNewInCamera;
@property(nonatomic, retain) NSNumber *hasShowNewInCenter; // @dynamic hasShowNewInCenter;
@property(nonatomic, retain) NSNumber *index; // @dynamic index;
@property(nonatomic, retain) NSNumber *isARKit; // @dynamic isARKit;
@property(nonatomic, retain) NSNumber *isDisabled; // @dynamic isDisabled;
@property(nonatomic, retain) NSNumber *isHot; // @dynamic isHot;
@property(nonatomic, retain) NSNumber *isLocal; // @dynamic isLocal;
@property(nonatomic, retain) NSNumber *isNew; // @dynamic isNew;
@property(nonatomic, retain) NSNumber *isRecommend; // @dynamic isRecommend;
@property(nonatomic, copy) NSString *localUrl; // @dynamic localUrl;
@property(nonatomic, copy) NSString *maxversion; // @dynamic maxversion;
@property(nonatomic, copy) NSString *minversion; // @dynamic minversion;
@property(nonatomic, retain) NSNumber *recommendSort; // @dynamic recommendSort;
@property(nonatomic, copy) NSString *tabImg; // @dynamic tabImg;
@property(nonatomic, retain) NSNumber *theNewTime; // @dynamic theNewTime;
@property(nonatomic, retain) NSNumber *type; // @dynamic type;
@property(nonatomic, copy) NSString *zipUrl; // @dynamic zipUrl;

@end

