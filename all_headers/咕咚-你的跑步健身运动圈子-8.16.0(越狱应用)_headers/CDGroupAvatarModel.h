//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface CDGroupAvatarModel : NSObject <NSCoding, NSCopying>
{
    NSString *_officialVipiconL;
    NSString *_certifiedVipiconM;
    NSString *_certifiedVipiconL;
    NSString *_certifiedVipiconS;
    NSString *_officialVipiconS;
    NSString *_icon;
    NSString *_officialVipiconM;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *officialVipiconM; // @synthesize officialVipiconM=_officialVipiconM;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *officialVipiconS; // @synthesize officialVipiconS=_officialVipiconS;
@property(retain, nonatomic) NSString *certifiedVipiconS; // @synthesize certifiedVipiconS=_certifiedVipiconS;
@property(retain, nonatomic) NSString *certifiedVipiconL; // @synthesize certifiedVipiconL=_certifiedVipiconL;
@property(retain, nonatomic) NSString *certifiedVipiconM; // @synthesize certifiedVipiconM=_certifiedVipiconM;
@property(retain, nonatomic) NSString *officialVipiconL; // @synthesize officialVipiconL=_officialVipiconL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

