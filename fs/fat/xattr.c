#include <linux/file.h>
#include <linux/fs.h>
#include <linux/xattr.h>
#include <linux/dcache.h>
#include "fat.h"

static const char default_xattr[] = "u:object_r:sdcard_external:s0";

int fat_setxattr(struct dentry *dentry, const char *name, const void *value, size_t size, int flags) {
	return 0;
}

ssize_t fat_getxattr(struct dentry *dentry, const char *name, void *value, size_t size) {
	if (size > strlen(default_xattr)+1 && value)
		strcpy(value, default_xattr);
	return strlen(default_xattr);
}

ssize_t fat_listxattr(struct dentry *dentry, char *list, size_t size) {
	return 0;
}

int fat_removexattr(struct dentry *dentry, const char *name) {
	return 0;
}
