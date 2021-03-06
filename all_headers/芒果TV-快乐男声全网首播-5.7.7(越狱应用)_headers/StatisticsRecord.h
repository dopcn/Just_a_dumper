//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTPersistanceRecord.h"

@class NSNumber, NSString;

@interface StatisticsRecord : CTPersistanceRecord
{
    NSNumber *_primaryKey;
    NSString *_event;
    NSString *_attributes;
    NSNumber *_timestamp;
    id _attributesObject;
}

@property(retain, nonatomic) id attributesObject; // @synthesize attributesObject=_attributesObject;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
@property(retain, nonatomic) NSNumber *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (id)attributesToObject;
- (_Bool)setPersistanceValue:(id)arg1 forKey:(id)arg2;
- (id)availableKeyList;

@end

