//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YYClassPropertyInfo;

@interface ALDBColumnInfo : NSObject
{
    NSString *_type;
    YYClassPropertyInfo *_property;
    NSString *_name;
    NSString *_constraint;
}

@property(copy, nonatomic) NSString *constraint; // @synthesize constraint=_constraint;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) YYClassPropertyInfo *property; // @synthesize property=_property;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)columnDefine;
@property(nonatomic) SEL customPropertyFromColumnValueTransformer;
@property(nonatomic) SEL customPropertyToColumnValueTransformer;

@end

