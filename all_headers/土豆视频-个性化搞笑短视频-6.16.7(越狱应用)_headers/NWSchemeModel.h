//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NWCoding.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface NWSchemeModel : NWCoding <NSCopying>
{
    NSString *_host;
    NSString *_urlScheme;
    long long _modificationTime;
}

+ (id)modelWithModificationTime:(long long)arg1;
@property(nonatomic) long long modificationTime; // @synthesize modificationTime=_modificationTime;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

