//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ENDigest : NSObject
{
}

+ (id)sha512String:(id)arg1;
+ (id)sha384String:(id)arg1;
+ (id)sha256String:(id)arg1;
+ (id)sha224String:(id)arg1;
+ (id)sha1String:(id)arg1;
+ (id)md5Digest:(const void *)arg1 length:(unsigned int)arg2;
+ (id)md5DigestFromString:(id)arg1;
+ (id)md5DigestFromData:(id)arg1;

@end

