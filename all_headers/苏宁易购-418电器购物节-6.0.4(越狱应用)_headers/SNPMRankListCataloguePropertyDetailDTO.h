//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SNPMRankListCataloguePropertyDetailDTO : NSObject
{
    NSString *_propertyValueID;
    NSString *_propertyValue;
    NSString *_valueSort;
}

@property(copy, nonatomic) NSString *valueSort; // @synthesize valueSort=_valueSort;
@property(copy, nonatomic) NSString *propertyValue; // @synthesize propertyValue=_propertyValue;
@property(copy, nonatomic) NSString *propertyValueID; // @synthesize propertyValueID=_propertyValueID;
- (void).cxx_destruct;
- (void)encodeFromDictionary:(id)arg1;

@end

